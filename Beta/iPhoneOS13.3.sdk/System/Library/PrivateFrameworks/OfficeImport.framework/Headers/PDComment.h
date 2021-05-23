/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

@class NSDate, NSString;

__attribute__((visibility("hidden")))
@interface PDComment : NSObject

{
    struct CGPoint mPosition;
    NSString *mText;
    unsigned long long mAuthorId;
    NSDate *mDate;
    unsigned int mIndex;
    PDComment *parent;
    NSString *_author;
}

@property (retain, nonatomic) NSString *author;
@property (retain) PDComment *parent;

- (id)init;
- (id)description;
- (id)date;
- (unsigned int)index;
- (struct CGPoint)position;
- (id)text;
- (void)setText:(id)arg1;
- (void)setDate:(id)arg1;
- (void)setIndex:(unsigned int)arg1;
- (void)setPosition:(struct CGPoint)arg1;
- (void)setAuthorId:(unsigned long long)arg1;
- (unsigned long long)authorId;

@end
