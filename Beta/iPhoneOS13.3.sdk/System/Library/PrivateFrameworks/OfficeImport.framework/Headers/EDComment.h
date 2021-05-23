/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

@class EDString;

__attribute__((visibility("hidden")))
@interface EDComment : NSObject

{
    _Bool _visible;
    int _rowIndex;
    int _columnIndex;
    EDString *_author;
}

@property (nonatomic) int rowIndex;
@property (nonatomic) int columnIndex;
@property (retain, nonatomic) EDString *author;
@property (nonatomic) _Bool visible;

- (id)description;

@end
