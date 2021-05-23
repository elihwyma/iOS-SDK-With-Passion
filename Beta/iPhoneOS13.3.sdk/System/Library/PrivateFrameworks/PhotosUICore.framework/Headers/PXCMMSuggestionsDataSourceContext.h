/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@class PHSuggestionMessageContext;

@interface PXCMMSuggestionsDataSourceContext : NSObject

{
    unsigned char _type;
    _Bool _shouldShowAccepted;
    PHSuggestionMessageContext *_messageContext;
    unsigned long long _matchingStrategy;
    long long _fetchLimit;
}

@property (nonatomic, readonly) unsigned char type;
@property (retain, nonatomic) PHSuggestionMessageContext *messageContext;
@property (nonatomic) unsigned long long matchingStrategy;
@property (nonatomic) _Bool shouldShowAccepted;
@property (nonatomic) long long fetchLimit;

- (id)description;
- (id)initWithType:(unsigned char)arg1;
- (_Bool)supportsMatching;

@end
