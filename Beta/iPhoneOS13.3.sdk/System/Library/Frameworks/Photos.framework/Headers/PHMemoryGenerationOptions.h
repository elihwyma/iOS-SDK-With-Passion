/*
 Image: /System/Library/Frameworks/Photos.framework/Photos
 */

#import <Foundation/NSObject.h>

#import <Photos/Swift-Protocol.h>

@class CLLocation, NSArray, NSDate, NSDictionary, PHPhotoLibrary;

@interface PHMemoryGenerationOptions : NSObject <Swift>

{
    unsigned long long _reason;
    NSDate *_date;
    CLLocation *_location;
    NSArray *_peopleNames;
    NSArray *_existingMemories;
    NSArray *_blacklistedMemories;
    NSDictionary *_extraParameters;
    PHPhotoLibrary *_photoLibrary;
}

@property (nonatomic) unsigned long long reason;
@property (retain, nonatomic) NSDate *date;
@property (retain, nonatomic) CLLocation *location;
@property (retain, nonatomic) NSArray *peopleNames;
@property (retain, nonatomic) NSArray *existingMemories;
@property (retain, nonatomic) NSArray *blacklistedMemories;
@property (retain, nonatomic) NSDictionary *extraParameters;
@property (retain, nonatomic) PHPhotoLibrary *photoLibrary;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;

@end
