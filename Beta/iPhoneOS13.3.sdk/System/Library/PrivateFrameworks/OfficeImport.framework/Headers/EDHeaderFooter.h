/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface EDHeaderFooter : NSObject

{
    NSString *mHeaderString;
    NSString *mFooterString;
}

+ (id)headerFooter;

- (id)description;
- (id)headerString;
- (id)footerString;
- (void)setHeaderString:(id)arg1;
- (void)setFooterString:(id)arg1;

@end
