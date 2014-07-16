#ifndef _CUST_PS_DATA_
#define _CUST_PS_DATA_

/***************************************************************************
                                 AT&T requirement
****************************************************************************/
/* 2011/11/28 Yi Dongseok */
#define FEATURE_PS_APN_TYPES

/* 2011/11/28 Yi Dongseok */
#ifdef FEATURE_PS_APN_TYPES
#define FEATURE_PS_ENTITLEMENT
#endif /* FEATURE_PS_APN_TYPES */

/* 2012.03.05 msseo
     Domestic roaming feature migration : domestic roaming�� ��� roaming false�� ó���Ͽ� data service �����ϵ��� ��.
*/
#define FEATURE_PS_DOMESTIC_ROAMING

/* 2012.03.05 msseo
     Acitng HPLMN feature migration : SIMRecords���� Acting HPLMN �о��.
*/
#define FEATURE_PS_ACTING_HPLMN

/* 2012.03.05 msseo
     PS attached icon
*/
#define FEATURE_PS_ATTACHED_ICON

/* 2012/04/02 by kwanghee 
  for porting authentec module
*/
#define FEATURE_PS_DATA_AUTHENTEC_VPNCLIENT

/* 2012.05.10 Yi Dongseok 
 * AT commands for last and total data usage
 */
#define FEATURE_PS_ATCMD_DATA_USAGE

#define FEATURE_SKY_DS_FAST_DORMANCY

/* 2012.07.06 Yi Dongseok 
 * Disable early data connections.
 * Qualcomm's default setting is 3. 3 SYNs concurrently.
 */
#define FEATURE_PS_DISABLE_EARLY_DATA_CONNECTIONS

/* 2012.07.16 Yi Dongseok 
 * Enable CONFIG_IP_MULTICAST for IGMP support.
 */
#define FEATURE_PS_ENABLE_CONFIG_IP_MULTICAST

/* 2012.12.07 Yi Dongseok
 * 2012.07.02 jun.hyojin
 * Default APN update for LTE ESM information flag
*/
#define FEATURE_PS_DATA_DEFAULT_APN

/***************************************************************************
                                 Additions, Modifications, Bug fixes
****************************************************************************/
/* 20110422_PS11_DATA_PKH
 - init.rc file 
 - setprop net.tcp.buffersize.lte 4096,1048576,3461120,4096,1048576,3461120
*/
#define FEATURE_DATA_CHANGE_TCP_CONFIGRATION

/* 20110422_PS11_DATA_PKH
 - Ư�� VPN ���� ���� �ȵǴ� ���� (���� : android ��  SSL VPN �� Cisco VPN ������)
 - external\mtpd\L2tp.c �� kernel config ( kernel\arch\arm\config\ ���� �̹� define�� ������ �ּ�ó���ϰ� y�� ���� )
*/
#define FEATURE_DATA_VPN_FIX

/* 20110422_PS11_DATA_PKH
 - no service event �� �߻��� ��� ���� data ������� �ʰ� disconnected �� broadcast �Ǿ� default route �����ǰ� 
   �ٷ� in service ���ԵǸ� �Ʒ������δ� data ����Ǿ� ������ �������� ������� ���� ������ ���̴� ���� 
 - dataconnectiontracker.java , BSP ���� �ּ�ó���Ǿ� �ʿ� ���� ��� ����. 
*/
#define FEATURE_DATA_NO_SERVICE_BUG_FIX

/* 2012/02/01 by kwanghee
    Not support IPv6 type DNS Query
    Ignore test connection for disconnection problem
    getaddrinfo.c
*/
#define FEATURE_PS_NOT_SUPPORT_IPV6_DNS_QUERY

/* 2012/06/04 by kwanghee
    system.prop
    Fit WIFI MTU size for RMNET when tethering
*/
#define FEATURE_PS_CHANGE_MTU

/* 2011/02/07 by kwanghee
    for Disable DUN
*/
#ifdef FEATURE_SKY_CP_NV_ACCESS_WITH_QMI
#define FEATURE_PS_DISABLE_DUN
#endif

/* 2011/06/25 by kwanghee
    for Disable CNE 
*/
#define FEATURE_PS_DISABLE_CNE

// 2011/12/02 Yi Dongseok
// change dhcp lease time 1h -> 24h for tethering
#define FEATURE_TETHERING_DHCP_LEASE_TIME

/* 2012/02/27 by kwanghee 
   Whenever data was disabled/enabled in easysetting, cannot update ui  in CallSetting.
*/
#define FEATURE_PS_UPDATE_MOBILE_DATA_IN_CALLSETTINGS

/* 20120731 park.kwanghee
 for fix VPN UI bug when VPN Connection Closed in Wi-Fi */
#define FEATURE_DISCONNECT_VPN_CLOSE_DIALOG

/* 2012/05/24 Yi Dongseok
  Disable current data system
*/
#define FEATURE_PS_DISABLE_CURRENT_DATA_SYSTEM

/* 2012.06.05 msseo
    2G voice �� �� NetworkInfo�� isAvailable()�� false�� ���ϵǴ� ���� ����
    Data suspend �Ǵ��� network availalbe ���� ����
*/
#define FEATURE_PS_DATA_ALLOWED_CONDITION

/* 2012.08.16 msseo
    Do not display data icon when encryption password isn't verified
*/
#define FEATURE_PS_DATA_ICON_IN_ENCRYPTION_STATE

/* 2012/10/30 by kwanghee
    delay time to turn on mobile hotspot during wifi connected
    EntitlementPDPService.java
*/
#define FEATURE_PS3_WIFI_HOTSPOT_DELAY

/* 2013/02/08 Ram
	enable to change SUPL Version via hidden menu.
*/
#define FEATURE_PS_DATA_SUPL_VERSION_CHANGE

/* 
2013/03/26 Ram
	SUPL Operation Mode - adding Cell ID Operation Mode
						  This Feature also exists in modem_proc - cust_ps_as.h			
*/
#define FEATURE_PS_DATA_SUPL_CELL_ID_OPERATION_MODE

/* 2013.02.28 Yi Dongseok 
 * WIFI hotspot and bluetooth tethering have same IPv6 address.
 * ip route add command leads error at 2nd call
 */
#define FEATURE_PS_INVALID_IPV6_ADDR_TETHERING

/* 2013.03.13 Yi Dongseok 
 * Check a ping before the data stall alarm is initiated
 */
#define FEATURE_PS_CHECK_PING_BEFORE_DATA_STALL_ALARM

/* 2013.03.25 msseo
     Reset retry timer and counter when screen is on
     This feature is modified from FEATURE_SKY_DS_IMMEDIATE_SETUP
*/
#define FEATURE_PS_RETRY_TIMER_RESET_WHEN_SCREEN_ON

/* 2013.05.20 Yi Dongseok 
 * For the case of DNS response with "no such name" in AT&T 16706 document
 * Prevent retrying DNS query by App. after NXDOMAIN answered
 * It MUST be defined with "Negative Caching of DNS Queries" by ES team.
 */
#define FEATURE_PS_BLOCK_RETRY_DNS_QUERY_ANSWERED_NXDOMAIN

/* 2013.05.30 msseo
     To prevent increasing mRefCount of DataConnection abnormally by deferred msg.
*/
#define FEATURE_PS_UNAVAILABLE_DEFERRED_MSG

/***************************************************************************
                                 Common (from models for other operators)
****************************************************************************/
/* 
 - Phone Interface�� ���� ���ϴ� APP�� ���Ͽ� AIDL�� �߰�
 - aidl ���� : ISkyDataConnection.aidl
 - �������̽� ���� : MMDataConnectionTracker.java
 - �߰� ���� ���� : DataPhone.java, Phone.java , SkyDataConInterfaceManager.java
 - aidl ���� �߰� : service_manager.c�� .aidl �߰�
 - make ���� ���� : android/framework/base/Android.mk ����
 - telephony/java/com/android/internal/telephony/ISkyDataConnection.aidl �߰�
*/
#define FEATURE_ISKY_DATA_CONNECTION

/*
- datausage �޴����� background data ���� �� for loop �� ���� UID ���� ip table �� set �� �־� 
   app ���� �ð� �� ���� ���� anr �߻� �� background data ���� ���� �� booting �� system ���� 
   anr �߻��ϴ� ���� ����   =>�� UID ���� event �� ó���ǵ��� ��.
- android_filesystem_config.h  �� Define �� UID �� system UID �� ����. 
- system/bin/iptables �� system �������� �Ǿ� ������ ip6tables �� shell �� �Ǿ� �վ� system ���� ����.
   -NetworkPolicyManagerService.java
*/
#define FEATURE_SKY_DS_BACKGROUND_RESTRICT_BUG_FIX

/*
- system/bin/iptables �� system �������� �Ǿ� ������ ip6tables �� shell �� �Ǿ� �վ� system ���� ����.
   -android_filesystem_config.h
*/
#define FEATURE_SKY_DS_IP6TABLE_UID_BUG_FIX

/* 
 - startUsingNetworkFeature���� Reconnect ȣ��� Fail�� �߻��Ͽ��� Phone.APN_REQUEST_STARTED�� �����Ͽ� Application���� ȥ���� ������
 - reconnect ���н� APN_REQUEST_FAILED�� �����ϵ��� ����
*/
#define FEATURE_SKY_DS_BUG_FIX_STARTUSINGNETWORKFEATURE

/*
 - �����ͷι� üũ �� �˾����� ���� off �ǰ� Ȧ�� �����Ͽ� �˾� ��� ���ý� üũ���� �ʴ� ���� ����
*/
#define FEATURE_SKY_DS_FIX_ROAM_CHECK_UI_BUG

/*
- data registration statue query �� fail �߻��ϸ� data service state �� no service, radio tech �� none ���� ó���Ǵ� ������ 
   ���� ���� newSS �� �����Ͽ� ���� response fail �߻��� ���� �� �����ϵ��� ��. 
- GsmServiceStateTracker.java
*/
#define FEATURE_SKY_DS_DATA_REGISTRATION_QUERY_FAIL_RECOVERY

/*
-  usb tethering/wifi hotspot �� google dns ���� ������� �Ϻ� ����Ʈ ������� �ʴ� ���� 
- ConnectivityService.java  tethering.java
*/
#define FEATURE_SKY_DS_SET_TETHERED_DNS

#define FEATURE_SKY_DS_SET_TCPBUF_IN_RAT_CHANGE

#define FEATURE_SKT_DS_RESUME_DOWNLOAD_FOR_WIFI_TO_DATA_CHANGE

/***************************************************************************
                                 Qualcomm CRs
PLEASE note CR numbers with a description
****************************************************************************/


/***************************************************************************
                                 Android Commits
PLEASE note the version the patch will be included
****************************************************************************/
/* 2013.05.14 Yi Dongseok */
/* subject: Fix NetworkInterface.getNetworkInterfaces /proc/net/if_inet6 parsing.
 * patched at: 4.1
 * will be released with: 4.2
 * url: https://android.googlesource.com/platform/libcore/+/b0e6dc5464f959b3d42f37b32f4b01767f6fe506
 */
 
/* 2013.07.09 Yi Dongseok */
/* subject: Avoid null mobile interfaces.
 * patched at: 4.2
 * will be released with: 4.2.1
 * url: https://android.googlesource.com/platform/frameworks/base/+/6a328afbab37981f34d8578972dbb2bf1abb7c41
 */
 
/***************************************************************************
                                 Kernel Commits
MUST note the version the patch applied
****************************************************************************/
/* 2013.04.18 Yi Dongseok */
/* subject: netlink: add reference of module in netlink_dump_start
 * patched at: 3.6
 * will be released with: 3.7
 * url: http://git.kernel.org/cgit/linux/kernel/git/stable/linux-stable.git/commit/?id=6dc878a8ca39e93f70c42f3dd7260bde10c1e0f1
 */

/* 2013.04.18 kwanghee park
     modified : /kernel/net/ipv4/fib_semantics.c
*/
#define FEATURE_PS_FIX_KERNEL_CRACH_FIB_SEMANTICS
/* subject: ipv4: fix the rcu race between free_fib_info and ip_route_output_slow
 * patched at: 3.4
 * will be released with: 3.5
 * url: http://git.kernel.org/cgit/linux/kernel/git/stable/linux-stable.git/commit/?id=e49cc0da7283088c5e03d475ffe2fdcb24a6d5b1
*/

/***************************************************************************
                                 For Debugging
****************************************************************************/
/* 2012/01/31 by kwanghee 
   for debugging, will be deleted.
*/
#define FEATURE_PS_DEBUG_TEMP

/***************************************************************************
                                 Deprecated
PLEASE note the date when made a deprecation
PLEASE delete the feature that leaving more than 1 year
****************************************************************************/
/* 2012/05/08 by kwanghee 
  for setting tcp liberal enable in init.qcom.rc

  2013.04.01 kwanghee, Park
  Deleted this feature because default qcom source is already modified.  
*/
//#define FEATURE_PS_DATA_TCP_BE_LIBERAL_ENABLE

#endif /* _CUST_PS_DATA_ */
