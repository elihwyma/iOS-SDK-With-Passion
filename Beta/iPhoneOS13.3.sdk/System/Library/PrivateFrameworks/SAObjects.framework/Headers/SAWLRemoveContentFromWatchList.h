/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSString;

@interface SAWLRemoveContentFromWatchList : SABaseClientBoundCommand

@property (copy, nonatomic) NSString *canonicalId;
@property (copy, nonatomic) NSString *siriLocale;
@property (copy, nonatomic) NSString *title;

+ (id)removeContentFromWatchList;
+ (id)removeContentFromWatchListWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;
- (_Bool)requiresResponse;

@end
