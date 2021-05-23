/*
 Image: /System/Library/PrivateFrameworks/CardKit.framework/CardKit
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@protocol CRCard, CRKCardSectionViewProviding;

@interface _CRKBundleIdentifiedCardSectionViewProvider : NSObject

{
    NSString *providerIdentifier;
    id <CRCard> card;
    NSArray *viewConfigurations;
    id <CRKCardSectionViewProviding> _realCardSectionViewProvider;
}

@property (copy, nonatomic) NSString *providerIdentifier;
@property (retain, nonatomic) id <CRKCardSectionViewProviding> realCardSectionViewProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) id <CRCard> card;
@property (nonatomic, readonly) NSArray *viewConfigurations;

- (_Bool)respondsToSelector:(SEL)arg1;
- (_Bool)vetoDisplayOfCardSection:(id)arg1;
- (unsigned long long)displayPriorityForCardSection:(id)arg1;

@end
