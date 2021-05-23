/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSString;

@interface SAWLSearchPlayableContentFromWatchList : SABaseClientBoundCommand

@property (copy, nonatomic) NSString *canonicalId;
@property (copy, nonatomic) NSString *contentType;
@property (nonatomic) _Bool onlyReturnNextItem;
@property (copy, nonatomic) NSString *siriLocale;
@property (copy, nonatomic) NSString *title;

+ (id)searchPlayableContentFromWatchList;
+ (id)searchPlayableContentFromWatchListWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;
- (_Bool)requiresResponse;

@end
