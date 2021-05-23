/*
 Image: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomNetworkUsage.framework/SymptomNetworkUsage
 */

#import <Foundation/NSObject.h>

@class NSString, NSUUID;

__attribute__((visibility("hidden")))
@interface AppStateTracker : NSObject

{
    int _pid;
    unsigned int _state;
    NSString *_displayName;
    NSString *_bundleName;
    NSUUID *_uuid;
}

@property (retain) NSString *displayName;
@property (retain) NSString *bundleName;
@property (retain) NSUUID *uuid;
@property int pid;
@property unsigned int state;

- (id)description;

@end
