/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface OCXRelationship : NSObject

{
    NSString *mIdString;
    NSString *mType;
    NSString *mTarget;
    _Bool mExternal;
}

@property (nonatomic, readonly) NSString *idString;
@property (nonatomic, readonly) NSString *type;
@property (nonatomic, readonly) NSString *target;

- (id)initWithId:(unsigned long long)arg1 type:(id)arg2 target:(id)arg3 external:(_Bool)arg4;
- (void)writeToStreamWriter:(id)arg1;

@end
