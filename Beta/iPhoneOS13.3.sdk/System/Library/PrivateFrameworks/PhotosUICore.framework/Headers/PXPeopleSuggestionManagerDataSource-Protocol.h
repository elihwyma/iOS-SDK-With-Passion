/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/Swift-Protocol.h>

@protocol PXPeopleSuggestionManagerDataSource <Swift>

@property (nonatomic) unsigned long long initialPageLimit;

- (unsigned short)suggestionsForPerson:withConfirmedSuggestions:andRejectedSuggestions:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)cancelSuggestionForPerson:withToken:error: /* Error: Ran out of types for this method. */;
- (unsigned short)commitSuggestionsForPerson:withConfirmedSuggestions:andRejectedSuggestions: /* Error: Ran out of types for this method. */;

@end
