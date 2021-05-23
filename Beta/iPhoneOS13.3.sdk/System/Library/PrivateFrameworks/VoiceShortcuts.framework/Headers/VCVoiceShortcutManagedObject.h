/*
 Image: /System/Library/PrivateFrameworks/VoiceShortcuts.framework/VoiceShortcuts
 */

#import <NSManagedObject.h>

@class NSData, NSDate, NSSet, NSString, NSUUID;

@interface VCVoiceShortcutManagedObject : NSManagedObject

@property (copy, nonatomic) NSString *associatedAppBundleIdentifier;
@property (copy, nonatomic) NSDate *dateCreated;
@property (copy, nonatomic) NSDate *dateLastModified;
@property (copy, nonatomic) NSUUID *identifier;
@property (nonatomic) _Bool isMarkedAsDeleted;
@property (retain, nonatomic) NSData *keyImageData;
@property (copy, nonatomic) NSString *phrase;
@property (retain, nonatomic) NSData *serializedWorkflowData;
@property (copy, nonatomic) NSString *shortcutDescription;
@property (copy, nonatomic) NSString *shortcutName;
@property (retain, nonatomic) NSSet *syncStates;

+ (id)fetchRequest;

@end
