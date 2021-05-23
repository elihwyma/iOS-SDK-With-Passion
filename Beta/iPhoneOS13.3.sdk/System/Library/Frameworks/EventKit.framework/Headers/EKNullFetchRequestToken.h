/*
 Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface EKNullFetchRequestToken : NSObject

+ (id)sharedToken;

- (void)cancel;

@end
