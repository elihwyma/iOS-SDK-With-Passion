/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SAMPCollection.h>

@class NSString;

@interface SAMPAlbumCollection : SAMPCollection

@property (copy, nonatomic) NSString *artist;
@property (copy, nonatomic) NSString *description;
@property (copy, nonatomic) NSString *sortArtist;

+ (id)albumCollection;
+ (id)albumCollectionWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
