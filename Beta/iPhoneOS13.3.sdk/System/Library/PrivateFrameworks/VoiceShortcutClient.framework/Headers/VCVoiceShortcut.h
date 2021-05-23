/*
 Image: /System/Library/PrivateFrameworks/VoiceShortcutClient.framework/VoiceShortcutClient
 */

#import <Foundation/NSObject.h>

@class INImage, INShortcut, NSDate, NSString, WFWorkflow;

@interface VCVoiceShortcut : NSObject

{
    NSString *_identifier;
    NSString *_phrase;
    NSString *_shortcutName;
    NSString *_shortcutDescription;
    NSString *_associatedAppBundleIdentifier;
    INImage *_keyImage;
    INShortcut *_shortcut;
    NSDate *_dateCreated;
    NSDate *_dateLastModified;
    unsigned long long _cachedBlacklistStatus;
}

@property (nonatomic, readonly) NSDate *dateCreated;
@property (nonatomic, readonly) NSDate *dateLastModified;
@property (nonatomic, readonly) _Bool hasBeenModified;
@property (nonatomic) unsigned long long cachedBlacklistStatus;
@property (copy, nonatomic, readonly) NSString *identifier;
@property (copy, nonatomic, readonly) NSString *phrase;
@property (copy, nonatomic, readonly) NSString *shortcutName;
@property (copy, nonatomic, readonly) NSString *shortcutDescription;
@property (copy, nonatomic, readonly) NSString *associatedAppBundleIdentifier;
@property (copy, nonatomic, readonly) INImage *keyImage;
@property (nonatomic, readonly) INShortcut *shortcut;
@property (nonatomic, readonly) WFWorkflow *workflow;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (void)initialize;
+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 phrase:(id)arg2 shortcutName:(id)arg3 shortcutDescription:(id)arg4 associatedAppBundleIdentifier:(id)arg5 dateCreated:(id)arg6 dateLastModified:(id)arg7 shortcut:(id)arg8 keyImageData:(id)arg9 error:(id *)arg10;

@end
