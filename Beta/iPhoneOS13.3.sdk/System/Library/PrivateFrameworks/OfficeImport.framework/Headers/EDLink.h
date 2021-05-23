/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

@class EDCollection;

__attribute__((visibility("hidden")))
@interface EDLink : NSObject

{
    int mType;
    EDCollection *mExternalNames;
}

+ (id)linkWithType:(int)arg1;

- (id)description;
- (int)type;
- (void)setType:(int)arg1;
- (id)initWithType:(int)arg1;
- (id)externalNames;

@end
