/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary, NSString;

@interface FCHCZoneContentsRecordTest : NSObject

{
    NSString *_recordType;
    NSArray *_unencryptedFields;
    NSArray *_encryptedFields;
    NSDictionary *_expectedValues;
}

@property (copy, nonatomic) NSString *recordType;
@property (copy, nonatomic) NSArray *unencryptedFields;
@property (copy, nonatomic) NSArray *encryptedFields;
@property (copy, nonatomic) NSDictionary *expectedValues;

@end
