/*
 Image: /System/Library/PrivateFrameworks/SearchUICardKitProviderSupport.framework/SearchUICardKitProviderSupport
 */

#import <NSObject.h>

@class NSArray, NSString, SUICKPFeedbackDelegateDemultiplexer;

@protocol CRCard, CRKCardSectionViewProviderDelegate;

@interface SUICKPCardSectionViewProvider : NSObject

{
    SUICKPFeedbackDelegateDemultiplexer *_feedbackDelegateDemux;
    id <CRCard> _card;
    NSArray *_viewConfigurations;
    id <CRKCardSectionViewProviderDelegate> _delegate;
}

@property (weak, nonatomic) id <CRKCardSectionViewProviderDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) id <CRCard> card;
@property (nonatomic, readonly) NSArray *viewConfigurations;
@property (copy, nonatomic, readonly) NSString *providerIdentifier;

- (id)initWithCard:(id)arg1;
- (unsigned long long)displayPriorityForCardSection:(id)arg1;

@end
