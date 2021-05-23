/*
 Image: /System/Library/PrivateFrameworks/PhotosImagingFoundation.framework/PhotosImagingFoundation
 */

#import <PhotosImagingFoundation/IPAAutoSettings.h>

@class NSMutableDictionary;

@interface IPAManualAutoSettings : IPAAutoSettings

{
    NSMutableDictionary *_state;
}

- (id)init;
- (id)valueForUndefinedKey:(id)arg1;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (id)initWithIdentifier:(id)arg1;
- (_Bool)_applyArchiveDictionary:(id)arg1;
- (void)_archiveIntoDictionary:(id)arg1;

@end
