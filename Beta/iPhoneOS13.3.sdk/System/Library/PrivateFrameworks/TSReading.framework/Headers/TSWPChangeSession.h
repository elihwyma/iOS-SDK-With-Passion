/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <TSReading/TSPObject.h>

@class NSDate, TSKAnnotationAuthor;

@interface TSWPChangeSession : TSPObject

{
    unsigned int _sessionUID;
    TSKAnnotationAuthor *_author;
    NSDate *_date;
}

@property (nonatomic) unsigned int sessionUID;
@property (retain, nonatomic) TSKAnnotationAuthor *author;
@property (retain, nonatomic) NSDate *date;

- (void)dealloc;
- (_Bool)isEqualToSession:(id)arg1;

@end
