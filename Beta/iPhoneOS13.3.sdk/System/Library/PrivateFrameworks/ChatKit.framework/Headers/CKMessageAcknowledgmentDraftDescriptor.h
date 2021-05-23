/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <Foundation/NSObject.h>

@class NSString, UIColor;

@interface CKMessageAcknowledgmentDraftDescriptor : NSObject

{
    long long _messageAcknowledgmentType;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) long long messageAcknowledgmentType;
@property (nonatomic, readonly) UIColor *acknowledgmentImageColor;
@property (nonatomic, readonly) NSString *acknowledgmentImageName;
@property (nonatomic, readonly) UIColor *selectedAcknowledgmentImageColor;
@property (nonatomic, readonly) UIColor *selectedBalloonColor;

+ (id)acknowledgmentBarColor;
+ (id)allMessageAcknowledgmentDescriptors;

- (long long)themeColor;
- (id)initWithMessageAcknowledgmentType:(long long)arg1;

@end
