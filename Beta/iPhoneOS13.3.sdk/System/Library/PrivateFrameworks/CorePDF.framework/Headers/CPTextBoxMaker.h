/*
 Image: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

#import <Foundation/NSObject.h>

@class CPBody, CPZone;

__attribute__((visibility("hidden")))
@interface CPTextBoxMaker : NSObject

{
    CPBody *bodyZone;
    CPZone *mainZone;
}

+ (void)promoteLayoutsIn:(id)arg1;
+ (void)boxLayoutsIn:(id)arg1;

- (void)rotateTextBox:(id)arg1;
- (_Bool)layoutIsSliced:(id)arg1;
- (void)promoteLayoutsInCertainRegions:(id)arg1;
- (void)promoteLayoutsIn:(id)arg1;
- (void)boxLayout:(id)arg1;
- (void)boxLayoutsIn:(id)arg1;
- (void)makeBoxesWith:(id)arg1 parent:(id)arg2;
- (void)rotate:(id)arg1;

@end
