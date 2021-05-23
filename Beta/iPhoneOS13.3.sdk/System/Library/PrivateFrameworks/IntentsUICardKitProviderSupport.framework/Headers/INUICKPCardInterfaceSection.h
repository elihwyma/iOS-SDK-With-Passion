/*
 Image: /System/Library/PrivateFrameworks/IntentsUICardKitProviderSupport.framework/IntentsUICardKitProviderSupport
 */

#import <IntentsUI/INUIInterfaceSection.h>

@class NSSet, NSString;

@protocol CRCardSection;

@interface INUICKPCardInterfaceSection : INUIInterfaceSection

{
    NSSet *_cardSectionParameters;
    id <CRCardSection> _cardSection;
}

@property (retain, nonatomic) id <CRCardSection> cardSection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) unsigned long long interactiveBehavior;
@property (copy, nonatomic) NSSet *parameters;
@property (nonatomic, readonly) _Bool isWildCardSection;

- (_Bool)isEqual:(id)arg1;
- (id)initWithInteractiveBehavior:(unsigned long long)arg1 parameters:(id)arg2;

@end
