/*
 Image: /System/Library/PrivateFrameworks/PhotosImagingFoundation.framework/PhotosImagingFoundation
 */

#import <NSObject.h>

@class NSString;

@interface IPAAutoSettings : NSObject

{
    NSString *_identifier;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) _Bool pending;

+ (id)pendingWithIdentifier:(id)arg1;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)initWithIdentifier:(id)arg1;
- (id)archiveDictionary;
- (_Bool)_applyArchiveDictionary:(id)arg1;
- (_Bool)applyArchiveDictionary:(id)arg1;
- (void)_archiveIntoDictionary:(id)arg1;
- (_Bool)isEqualToAutoSettings:(id)arg1;

@end
