/*
 Image: /System/Library/PrivateFrameworks/Tips.framework/Tips
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableArray;

@interface TPSPersonalizationEntry : NSObject

{
    NSMutableArray *_personalizations;
}

@property (nonatomic, readonly) unsigned long long providerID;
@property (nonatomic, readonly) unsigned long long personalizationID;
@property (nonatomic, readonly) NSArray *personalizations;

- (id)debugDescription;
- (void)addPersonalization:(id)arg1;
- (id)initWithPersonalization:(id)arg1;
- (void)updateWithPersonalizedStrings:(id)arg1;

@end
