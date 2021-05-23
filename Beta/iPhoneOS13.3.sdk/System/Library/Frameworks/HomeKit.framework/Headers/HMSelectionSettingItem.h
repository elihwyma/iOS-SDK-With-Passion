/*
 Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

#import <Foundation/NSObject.h>

#import <HomeKit/Swift-Protocol.h>

@class NSString, NSUUID;

@interface HMSelectionSettingItem : NSObject <Swift>

{
    NSUUID *_identifier;
    NSString *_title;
    NSString *_localizedTitle;
}

@property (copy, readonly) NSUUID *identifier;
@property (copy, readonly) NSString *title;
@property (copy, readonly) NSString *localizedTitle;

+ (_Bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
