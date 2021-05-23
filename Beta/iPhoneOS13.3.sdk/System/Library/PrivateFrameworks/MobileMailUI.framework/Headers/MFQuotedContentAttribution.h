/*
 Image: /System/Library/PrivateFrameworks/MobileMailUI.framework/MobileMailUI
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface MFQuotedContentAttribution : NSObject

{
    long long _type;
    NSString *_senderName;
}

@property (nonatomic, readonly) long long type;
@property (copy, nonatomic, readonly) NSString *senderName;

+ (id)noAttribution;
+ (id)unknownAttribution;
+ (id)attributionWithSenderName:(id)arg1;

- (id)debugDescription;
- (id)initWithType:(long long)arg1 senderName:(id)arg2;

@end
