/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface TCFontName : NSObject

{
    NSString *_styleName;
    NSString *_fullName;
}

@property (nonatomic, readonly) NSString *styleName;
@property (nonatomic, readonly) NSString *fullName;

- (id)description;
- (id)initWithDictionary:(id)arg1;
- (id)initWithStyleName:(id)arg1 fullName:(id)arg2;
- (id)equivalentDictionary;

@end
