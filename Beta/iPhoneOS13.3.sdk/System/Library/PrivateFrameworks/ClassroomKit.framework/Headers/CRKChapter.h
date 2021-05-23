/*
 Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary, NSString, NSURL;

@interface CRKChapter : NSObject

{
    NSString *_title;
    NSArray *_subchapters;
    NSURL *_webURL;
}

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSArray *subchapters;
@property (retain, nonatomic) NSURL *webURL;
@property (copy, nonatomic, readonly) NSDictionary *JSONRepresentation;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
