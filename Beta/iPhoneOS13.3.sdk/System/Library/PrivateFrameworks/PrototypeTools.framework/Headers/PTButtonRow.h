/*
 Image: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools
 */

#import <PrototypeTools/PTSRow.h>

@class NSString;

@interface PTButtonRow : PTSRow

{
    NSString *_outletKeyPath;
}

@property (copy, nonatomic) NSString *outletKeyPath;

+ (id)rowWithTitle:(id)arg1 action:(id)arg2;
+ (id)rowWithTitle:(id)arg1 outletKeyPath:(id)arg2;

- (id)_defaultAction;
- (id)outletKeyPath:(id)arg1;

@end
