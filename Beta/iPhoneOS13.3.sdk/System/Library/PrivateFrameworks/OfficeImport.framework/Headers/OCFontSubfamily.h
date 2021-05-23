/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

@class NSString, OCFontMetadata;

__attribute__((visibility("hidden")))
@interface OCFontSubfamily : NSObject

{
    NSString *_name;
    OCFontMetadata *_metadata;
}

@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) OCFontMetadata *metadata;

+ (id)fontSubfamilyWithName:(id)arg1 metadata:(id)arg2;

- (id)initWithName:(id)arg1 metadata:(id)arg2;

@end
