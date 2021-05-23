/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

@class NSData, NSString;

__attribute__((visibility("hidden")))
@interface TCNamedData : NSObject

{
    NSData *mData;
    NSString *mName;
}

@property (nonatomic, readonly) NSData *data;
@property (nonatomic, readonly) NSString *name;

+ (id)namedDataWithData:(id)arg1 named:(id)arg2;

- (id)initWithData:(id)arg1 named:(id)arg2;

@end
