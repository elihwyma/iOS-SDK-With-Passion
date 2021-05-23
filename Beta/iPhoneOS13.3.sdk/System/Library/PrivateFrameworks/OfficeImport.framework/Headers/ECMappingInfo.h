/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface ECMappingInfo : NSObject

{
    NSString *mSheetName;
}

@property (nonatomic, readonly) NSString *sheetName;
@property (nonatomic, readonly) int rowOffset;
@property (nonatomic, readonly) int columnOffset;

+ (id)mappingInfoWithSheetName:(id)arg1;

- (id)initWithSheetName:(id)arg1;

@end
