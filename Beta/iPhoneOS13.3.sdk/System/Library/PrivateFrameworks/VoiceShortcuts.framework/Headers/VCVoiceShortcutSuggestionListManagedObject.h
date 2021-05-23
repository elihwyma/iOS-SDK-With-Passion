/*
 Image: /System/Library/PrivateFrameworks/VoiceShortcuts.framework/VoiceShortcuts
 */

#import <NSManagedObject.h>

@class NSData, NSString;

@interface VCVoiceShortcutSuggestionListManagedObject : NSManagedObject

@property (copy, nonatomic) NSString *associatedAppBundleIdentifier;
@property (retain, nonatomic) NSData *serializedSuggestions;

+ (id)fetchRequest;

@end
