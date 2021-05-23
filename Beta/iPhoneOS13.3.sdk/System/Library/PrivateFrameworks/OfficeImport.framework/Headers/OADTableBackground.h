/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString, OADFill;

__attribute__((visibility("hidden")))
@interface OADTableBackground : NSObject

{
    OADFill *mFill;
    NSArray *mEffects;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)fill;
- (_Bool)hasEffects;
- (void)setFill:(id)arg1;
- (id)effects;
- (void)setEffects:(id)arg1;

@end
