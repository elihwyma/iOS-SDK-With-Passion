/*
 Image: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
 */

#import <Foundation/NSObject.h>

@class NSData, NSDate, NSString;

@interface AVTAvatarRecord : NSObject

{
    NSString *_identifier;
    NSData *_avatarData;
    NSDate *_orderDate;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, readonly) NSString *identifier;
@property (retain, nonatomic) NSData *avatarData;
@property (nonatomic, readonly) NSDate *orderDate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly, getter=isEditable) _Bool editable;
@property (nonatomic, readonly, getter=isPuppet) _Bool puppet;

+ (_Bool)supportsSecureCoding;
+ (_Bool)canLoadAvatarWithData:(id)arg1;
+ (id)defaultAvatarRecord;
+ (id)dataForNeutralRecord;
+ (id)dataForNewRecord;
+ (CDUnknownBlockType)matchingIdentifierTest:(id)arg1;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)activityViewControllerPlaceholderItem:(id)arg1;
- (id)activityViewController:(id)arg1 itemForActivityType:(id)arg2;
- (id)activityViewController:(id)arg1 subjectForActivityType:(id)arg2;
- (id)activityViewController:(id)arg1 dataTypeIdentifierForActivityType:(id)arg2;
- (id)activityViewController:(id)arg1 thumbnailImageForActivityType:(id)arg2 suggestedSize:(struct CGSize)arg3;
- (id)initWithAvatarData:(id)arg1 orderDate:(id)arg2;
- (id)initWithAvatarData:(id)arg1 identifier:(id)arg2 orderDate:(id)arg3;

@end
