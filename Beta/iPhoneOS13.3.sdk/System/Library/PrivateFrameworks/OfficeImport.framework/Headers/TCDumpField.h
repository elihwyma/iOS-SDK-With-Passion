/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

@class NSString, TCDumpType;

__attribute__((visibility("hidden")))
@interface TCDumpField : NSObject

{
    TCDumpType *mType;
    NSString *mName;
}

- (id)name;
- (id)type;
- (id)initWithType:(id)arg1 name:(id)arg2;

@end
