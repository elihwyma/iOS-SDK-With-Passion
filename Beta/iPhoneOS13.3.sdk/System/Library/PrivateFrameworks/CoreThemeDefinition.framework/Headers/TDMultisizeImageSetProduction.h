/*
 Image: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
 */

#import <CoreThemeDefinition/TDNamedArtworkProduction.h>

@class NSSet;

@interface TDMultisizeImageSetProduction : TDNamedArtworkProduction

@property (retain, nonatomic) NSSet *sizeIndexes;
@property (retain, nonatomic) NSSet *multisizeImageSetRenditions;

- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;
- (void)processRendition:(id)arg1 withBackstop:(id)arg2;

@end
