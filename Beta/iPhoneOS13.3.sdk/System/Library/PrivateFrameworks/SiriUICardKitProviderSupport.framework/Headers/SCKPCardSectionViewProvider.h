/*
 Image: /System/Library/PrivateFrameworks/SiriUICardKitProviderSupport.framework/SiriUICardKitProviderSupport
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@protocol CRCard;

@interface SCKPCardSectionViewProvider : NSObject

{
    id <CRCard> _card;
    NSArray *_viewConfigurations;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) id <CRCard> card;
@property (nonatomic, readonly) NSArray *viewConfigurations;
@property (copy, nonatomic, readonly) NSString *providerIdentifier;

- (id)initWithCard:(id)arg1;

@end
