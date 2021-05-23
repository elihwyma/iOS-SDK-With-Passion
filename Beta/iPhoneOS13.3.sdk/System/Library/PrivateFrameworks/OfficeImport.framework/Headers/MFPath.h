/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

#import <OfficeImport/Swift-Protocol.h>

__attribute__((visibility("hidden")))
@interface MFPath : NSObject <Swift>

- (id)copyWithZone:(struct _NSZone *)arg1;
- (int)state;
- (int)end;
- (_Bool)isOpen;
- (int)begin;
- (int)abort;
- (struct CGPoint)currentPoint;
- (int)flatten;
- (int)stroke:(id)arg1;
- (int)closeFigure;
- (int)widen:(id)arg1;
- (int)fill:(id)arg1;

@end
