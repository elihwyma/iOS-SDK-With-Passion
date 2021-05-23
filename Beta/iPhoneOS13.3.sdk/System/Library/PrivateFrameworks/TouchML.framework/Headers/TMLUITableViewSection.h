/*
 Image: /System/Library/PrivateFrameworks/TouchML.framework/TouchML
 */

#import <NSObject.h>

@class NSArray, NSString;

@interface TMLUITableViewSection : NSObject

{
    NSArray *_rows;
    NSString *_header;
    NSString *_footer;
}

@property (copy, nonatomic) NSArray *rows;
@property (copy, nonatomic) NSString *header;
@property (copy, nonatomic) NSString *footer;
@property (nonatomic, readonly) long long numberOfRows;

- (id)cellForRow:(long long)arg1;

@end
