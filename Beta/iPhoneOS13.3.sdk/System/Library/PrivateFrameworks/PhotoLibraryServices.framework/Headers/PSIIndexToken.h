/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface PSIIndexToken : NSObject

{
    short _category;
    short _owningCategory;
    NSString *_text;
    NSString *_identifier;
}

@property (copy, nonatomic, readonly) NSString *text;
@property (copy, nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) short category;
@property (nonatomic, readonly) short owningCategory;

- (id)description;
- (id)initWithText:(id)arg1 identifier:(id)arg2 category:(short)arg3 owningCategory:(short)arg4;

@end
