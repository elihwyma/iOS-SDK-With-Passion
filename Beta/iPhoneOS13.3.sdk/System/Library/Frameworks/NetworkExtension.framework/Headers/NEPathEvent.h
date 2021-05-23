/*
 Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface NEPathEvent : NSObject

{
    long long _type;
    NSString *_bundleID;
}

@property (readonly) long long type;
@property (readonly) NSString *bundleID;

- (id)initWithType:(long long)arg1 bundleID:(id)arg2;

@end
