/*
 Image: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
 */

#import <CoreThemeDefinition/TDSimpleArtworkElementProduction.h>

@class NSOrderedSet, NSString;

@interface TDSchemaElementProduction : TDSimpleArtworkElementProduction

@property (retain, nonatomic) NSString *folderName;
@property (retain, nonatomic) NSOrderedSet *slices;

- (id)relativePath;
- (id)associatedFileURLWithDocument:(id)arg1;
- (void)generateNewRendition;

@end
