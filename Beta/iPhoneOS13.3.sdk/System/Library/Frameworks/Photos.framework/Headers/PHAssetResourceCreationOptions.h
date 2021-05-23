/*
 Image: /System/Library/Frameworks/Photos.framework/Photos
 */

#import <Foundation/NSObject.h>

#import <Photos/Swift-Protocol.h>

@class NSDate, NSString;

@interface PHAssetResourceCreationOptions : NSObject <Swift>

{
    _Bool _shouldMoveFile;
    _Bool _shouldIngestInPlace;
    int _burstPickType;
    NSDate *_alternateImportImageDate;
    NSString *_originalFilename;
    NSString *_uniformTypeIdentifier;
}

@property (retain, nonatomic) NSDate *alternateImportImageDate;
@property (nonatomic) _Bool shouldIngestInPlace;
@property (nonatomic) int burstPickType;
@property (copy, nonatomic) NSString *originalFilename;
@property (copy, nonatomic) NSString *uniformTypeIdentifier;
@property (nonatomic) _Bool shouldMoveFile;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)propertyListRepresentation;
- (id)initWithPropertyListRepresentation:(id)arg1;

@end
