/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSString, SAMPCollection;

@interface SAMPAddMediaItemsToLibrary : SABaseClientBoundCommand

@property (copy, nonatomic) NSString *influencedUserSharedUserId;
@property (retain, nonatomic) SAMPCollection *mediaItems;

+ (id)addMediaItemsToLibrary;
+ (id)addMediaItemsToLibraryWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;
- (_Bool)requiresResponse;

@end
