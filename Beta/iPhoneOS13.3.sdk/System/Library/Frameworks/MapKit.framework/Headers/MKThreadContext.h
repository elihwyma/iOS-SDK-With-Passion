/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface MKThreadContext : NSObject

{
    long long _CA_disableActionsCounter;
}

+ (id)currentContext;

- (void)_CA_setDisableActions:(_Bool)arg1;

@end
