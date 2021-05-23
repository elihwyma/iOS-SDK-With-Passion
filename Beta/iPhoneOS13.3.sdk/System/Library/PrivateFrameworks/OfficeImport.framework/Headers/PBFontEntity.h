/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface PBFontEntity : NSObject

{
    NSString *mFaceName;
    int mCharSet;
    int mType;
    int mFamily;
}

- (int)type;
- (int)family;
- (id)faceName;
- (int)charSet;
- (id)initWithName:(id)arg1 charSet:(int)arg2 type:(int)arg3 family:(int)arg4;

@end
