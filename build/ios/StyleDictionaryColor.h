
//
// StyleDictionaryColor.h
//

// Do not edit directly
// Generated on Sun, 24 Oct 2021 21:25:06 GMT


#import <UIKit/UIKit.h>

typedef NS_ENUM(NSInteger, StyleDictionaryColorName) {
BrandColorPrimary1,
BrandColorPrimary2,
BrandColorPrimary3,
BrandColorPrimary4,
BrandColorPrimary5,
NeutralColor1,
NeutralColor2,
NeutralColor3,
NeutralColor4,
NeutralColor5
};

@interface StyleDictionaryColor : NSObject
+ (NSArray *)values;
+ (UIColor *)color:(StyleDictionaryColorName)color;
@end
