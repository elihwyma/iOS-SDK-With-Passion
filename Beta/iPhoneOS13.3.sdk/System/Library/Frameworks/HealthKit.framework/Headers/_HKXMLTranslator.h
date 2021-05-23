/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <Foundation/NSObject.h>

@interface _HKXMLTranslator : NSObject

{
    struct _xsltStylesheet *_stylesheet;
}

- (void)dealloc;
- (id)_localizeXSL:(id)arg1 localizationTableName:(id)arg2 localizationOverride:(id)arg3;
- (id)initWithXSL:(id)arg1 localizationTableName:(id)arg2 localizationOverride:(id)arg3;
- (id)convertToHTMLFromXML:(id)arg1;

@end
