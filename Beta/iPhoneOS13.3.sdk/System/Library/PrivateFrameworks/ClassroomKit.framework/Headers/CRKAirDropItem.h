/*
 Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSString, NSURL;

@interface CRKAirDropItem : NSObject

{
    NSURL *_fileURL;
}

@property (nonatomic, readonly) NSURL *fileURL;
@property (copy, nonatomic, readonly) NSString *fileName;
@property (copy, nonatomic, readonly) NSString *UTI;
@property (copy, nonatomic, readonly) NSDictionary *dictionaryRepresentation;

- (id)initWithFileURL:(id)arg1;
- (_Bool)isValidWithError:(id *)arg1;
- (id)copyToFolder:(id)arg1 error:(id *)arg2;
- (id)moveToFolder:(id)arg1 error:(id *)arg2;

@end
