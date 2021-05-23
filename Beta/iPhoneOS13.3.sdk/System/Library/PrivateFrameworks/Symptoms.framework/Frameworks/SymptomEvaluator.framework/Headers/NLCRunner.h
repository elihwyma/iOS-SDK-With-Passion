/*
 Image: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface NLCRunner : NSObject

{
    struct {
        int version;
        int msg_type;
        struct {
            int flags;
            struct {
                unsigned int family;
                unsigned int exclude_loopback;
                char ifname[16];
            } net_config;
            CDStruct_f78d6f0f uplink_config;
            CDStruct_f78d6f0f downlink_config;
        } nlc_conditions[2];
    } theCommand;
    struct {
        unsigned int server_local_port;
        int cookie;
    } session_cookie;
    _Bool simulationRunning;
    NSString *_interfaceName;
}

@property (retain, nonatomic) NSString *interfaceName;

+ (id)sharedInstance;

- (id)init;
- (void)engage;
- (void)disableDNS;
- (void)enableDNS;
- (void)setUplinkPacketLossRate:(float)arg1;
- (void)setDownlinkPacketLossRate:(float)arg1;
- (void)disengage;
- (void)modifySimulation;

@end
