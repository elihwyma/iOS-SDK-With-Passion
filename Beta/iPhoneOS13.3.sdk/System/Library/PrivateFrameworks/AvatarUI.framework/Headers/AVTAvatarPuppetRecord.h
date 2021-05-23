/*
 Image: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface AVTAvatarPuppetRecord : NSObject

{
    NSString *_puppetName;
}

@property (copy, nonatomic, readonly) NSString *puppetName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly, getter=isEditable) _Bool editable;
@property (nonatomic, readonly, getter=isPuppet) _Bool puppet;

+ (CDUnknownBlockType)matchingIdentifierTest:(id)arg1;

- (_Bool)isEqual:(id)arg1;
- (id)initWithPuppetName:(id)arg1;

@end
