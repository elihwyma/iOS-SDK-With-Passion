/*
 Image: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

#import <Foundation/NSObject.h>

@class CPPage, NSMutableArray;

__attribute__((visibility("hidden")))
@interface CPHitTest : NSObject

{
    CPPage *page;
    NSMutableArray *objectsOnPage;
    float mapTemp;
}

- (void)dealloc;
- (id)page;
- (id)initWithPage:(id)arg1;
- (void)findClickableObjects:(_Bool)arg1;
- (id)objectAtPoint:(struct CGPoint)arg1;
- (id)paragraph:(struct CGPoint)arg1;
- (id)column:(struct CGPoint)arg1;
- (id)findObjectIn:(id)arg1 at:(struct CGPoint)arg2 count:(int *)arg3;
- (id)textLine:(struct CGPoint)arg1;
- (id)paragraphNear:(struct CGPoint)arg1;
- (id)layoutArea:(struct CGPoint)arg1;
- (unsigned int)columnsAt:(struct CGPoint)arg1;
- (long long)compareByReadingOrder:(struct CGPoint)arg1 to:(struct CGPoint)arg2;
- (_Bool)hitTestGraphicObject:(id)arg1 point:(struct CGPoint)arg2;
- (_Bool)hitTestParagraph:(id)arg1 point:(struct CGPoint)arg2;
- (id)findBestMatch:(id)arg1 atPoint:(struct CGPoint)arg2;

@end
