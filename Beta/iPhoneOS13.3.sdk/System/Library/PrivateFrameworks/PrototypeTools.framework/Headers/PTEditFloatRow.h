/*
 Image: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools
 */

#import <PrototypeTools/PTSRow.h>

@interface PTEditFloatRow : PTSRow

{
    unsigned long long _precision;
}

@property (nonatomic) unsigned long long precision;

- (id)init;
- (id)precision:(unsigned long long)arg1;
- (id)between:(double)arg1 and:(double)arg2;

@end
