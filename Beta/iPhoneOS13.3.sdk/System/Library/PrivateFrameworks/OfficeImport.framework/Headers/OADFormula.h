/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface OADFormula : NSObject

{
    int mType;
    struct OADFormulaArg mArgs[3];
    NSString *mName;
}

- (id)description;
- (id)name;
- (int)type;
- (void)setName:(id)arg1;
- (struct OADFormulaArg)argAtIndex:(unsigned int)arg1;
- (id)initWithType:(int)arg1 arg0:(struct OADFormulaArg)arg2 arg1:(struct OADFormulaArg)arg3 arg2:(struct OADFormulaArg)arg4;

@end
